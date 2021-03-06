//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _EARFormatter;
@protocol OS_dispatch_queue;

@interface _EARSyncSpeechRecognizer : NSObject
{
    NSObject<OS_dispatch_queue> *_formatterQueue;
    _EARFormatter *_formatter;
    struct shared_ptr<quasar::SyncSpeechRecognizer> _syncRecognizer;
    NSString *_configPath;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)resultsWithEndedAudio;
- (id)resultsWithAddedAudio:(id)arg1 numberOfSamples:(unsigned int)arg2 taskName:(id)arg3;
- (id)getSpeechRecognitionResultFromTokens:(vector_2c247c42)arg1 taskName:(id)arg2;
- (void)resetWithSamplingRate:(unsigned int)arg1 language:(id)arg2 taskType:(id)arg3 userId:(id)arg4 sessionId:(id)arg5 deviceId:(id)arg6 farField:(_Bool)arg7 audioSource:(id)arg8 maxAudioBufferSizeSeconds:(unsigned int)arg9;
- (id)initWithConfiguration:(id)arg1;

@end

