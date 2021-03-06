//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableData;

@interface CSShadowMicScoreCreator : NSObject
{
    unsigned int _bestStartDetectSample;
    unsigned int _bestEarlyDetectSample;
    unsigned int _bestEndDetectSample;
    NSMutableArray *_rmsSamplesForEntireAudio;
    NSMutableData *_audioBuffer;
    unsigned int _numberOfVoicingFrames;
    int _numberOfTotalFramesETFT;
    double _shadowMicScore;
    double _speechVoiceLevel;
}

- (void).cxx_destruct;
@property(nonatomic) int numberOfTotalFramesETFT; // @synthesize numberOfTotalFramesETFT=_numberOfTotalFramesETFT;
@property(nonatomic) unsigned int numberOfVoicingFrames; // @synthesize numberOfVoicingFrames=_numberOfVoicingFrames;
@property(nonatomic) double speechVoiceLevel; // @synthesize speechVoiceLevel=_speechVoiceLevel;
@property(retain, nonatomic) NSMutableData *audioBuffer; // @synthesize audioBuffer=_audioBuffer;
@property(retain, nonatomic) NSMutableArray *rmsSamplesForEntireAudio; // @synthesize rmsSamplesForEntireAudio=_rmsSamplesForEntireAudio;
@property(nonatomic) double shadowMicScore; // @synthesize shadowMicScore=_shadowMicScore;
@property(nonatomic) unsigned int bestEndDetectSample; // @synthesize bestEndDetectSample=_bestEndDetectSample;
@property(nonatomic) unsigned int bestEarlyDetectSample; // @synthesize bestEarlyDetectSample=_bestEarlyDetectSample;
@property(nonatomic) unsigned int bestStartDetectSample; // @synthesize bestStartDetectSample=_bestStartDetectSample;
- (void)_calculateNumberOfVoicingFrames;
- (void)_calculateSpeechVoicingLevel;
- (double)_calculateRMSWithFrameData:(short [80])arg1;
- (void)calculateShadowMicScore;
- (void)addDataToBuffer:(id)arg1;
- (id)init;

@end

