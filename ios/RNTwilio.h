
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif
#import <TwilioVoice/TwilioVoice.h>
#import <AVFoundation/AVFoundation.h>

@interface RNTwilio : NSObject <RCTBridgeModule, TVOCallDelegate, TVONotificationDelegate, AVAudioPlayerDelegate>

@end
  
