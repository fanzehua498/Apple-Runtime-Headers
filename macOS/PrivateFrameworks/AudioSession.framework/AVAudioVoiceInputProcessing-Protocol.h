//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioSession/AVAudioDSPControlling-Protocol.h>

@class NSError;

@protocol AVAudioVoiceInputProcessing <AVAudioDSPControlling>
@property(readonly, nonatomic, getter=isUplinkMuted) BOOL uplinkMuted;
@property(readonly, nonatomic, getter=isAutomaticGainCorrectionEnabled) BOOL automaticGainCorrectionEnabled;
- (BOOL)muteUplink:(BOOL)arg1 error:(NSError *)arg2;
- (BOOL)enableAutomaticGainCorrection:(BOOL)arg1 error:(NSError *)arg2;
@end

