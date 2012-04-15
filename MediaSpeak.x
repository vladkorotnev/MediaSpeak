#import <UIKit/UIKit.h>
#import "VoiceServices/VoiceServices.h"
#import <SpringBoard/SBMediaController.h>

static BOOL enabled;

static void loadPrefs() {
	NSMutableDictionary *dict = [[NSMutableDictionary alloc] initWithContentsOfFile:@"/var/mobile/Library/Preferences/com.freemanrepo.mediaspeak.plist"];
	enabled = [[dict objectForKey:@"Enabled"] boolValue];
	[dict release];
}

NSString *nowPlayingTitle;
	NSString *nowPlayingArtist;
	NSString *nowPlayingAlbum;

%hook SBMediaController
- (void)_nowPlayingInfoChanged {
	%orig;
	if (enabled) [self speak];
}
- (void)setNowPlayingInfo:(id)newValue {
	%orig;
	if (enabled) [self speak];
}
%new(v@:)
-(void)speak {
	BOOL hasChanges = NO;
	SBMediaController *mc = [%c(SBMediaController) sharedInstance];
	NSString *title = mc.nowPlayingTitle;
	if ((title != nowPlayingTitle) && ![title isEqualToString:nowPlayingTitle]) {
		[nowPlayingTitle release];
		nowPlayingTitle = [title copy];
		if (title == nil) {
			hasChanges = NO;
		} else {
			hasChanges = YES;
		}
		
	}
	NSString *artist = mc.nowPlayingArtist;
	if ((artist != nowPlayingArtist) && ![artist isEqualToString:nowPlayingArtist]) {
		[nowPlayingArtist release];
		nowPlayingArtist = [artist copy];
		if (artist == nil) {
			hasChanges = NO;
		} else { 
			hasChanges = YES;
		}
		
	}
	NSString *album = mc.nowPlayingAlbum;
	if ((album != nowPlayingArtist) && ![album isEqualToString:nowPlayingAlbum]) {
		[nowPlayingAlbum release];
		nowPlayingAlbum = [album copy];
		if (album == nil) {
			hasChanges = NO;
		} else{
		hasChanges = YES;
	}
	
	}
	if (hasChanges) {
		if ([[self nowPlayingTitle] isEqualToString:nil] && [[self nowPlayingArtist] isEqualToString:nil]) {
		
		} else {
			NSString *string = [NSString stringWithFormat:@"Now playing %@ by %@", [self nowPlayingTitle], [self nowPlayingArtist]];
			NSObject *v = [[%c(VSSpeechSynthesizer) alloc] init]; [v startSpeakingString:string];
		}
	}
}
%end

%ctor {
	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
	%init;
	CFNotificationCenterAddObserver(CFNotificationCenterGetDarwinNotifyCenter(), NULL, (CFNotificationCallback)loadPrefs, CFSTR("com.freemanrepo.mediaspeak/prefs"), NULL, CFNotificationSuspensionBehaviorCoalesce);
	loadPrefs();
	[pool drain];
}