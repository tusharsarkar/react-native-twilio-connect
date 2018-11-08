
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif
#import <TwilioVoice/TwilioVoice.h>
#import <AVFoundation/AVFoundation.h>
#import <PushKit/PushKit.h>
#import <React/RCTEventEmitter.h>

@interface RNTwilio : RCTEventEmitter <RCTBridgeModule, TVOCallDelegate, TVONotificationDelegate, AVAudioPlayerDelegate, PKPushRegistryDelegate>

@end
  
