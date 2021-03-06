//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLAlertSoundPolicySource-Protocol.h>

@class CSLLocalAlertSupressionAssertion, CSLWaterLockEjectionOperation, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface CSLWaterLockEjection : NSObject <CSLAlertSoundPolicySource>
{
    NSObject<OS_dispatch_queue> *_waterLockEjectionQueue;
    NSOperationQueue *_operationQueue;
    CSLWaterLockEjectionOperation *_currentEjectionOperation;
    CSLLocalAlertSupressionAssertion *_alertSuppressionAssertion;
    _Bool _registeredAsAlertSoundPolicySource;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)allowedAudioFeedbackForAlertName:(id)arg1 options:(unsigned int)arg2 withBulletinItem:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)allowedAudioFeedbackForAlertName:(id)arg1 options:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned int)allowedAudioFeedbackForAlertName:(id)arg1 options:(unsigned int)arg2 withBulletinItem:(id)arg3;
- (unsigned int)allowedAudioFeedbackForAlertName:(id)arg1 options:(unsigned int)arg2;
- (void)_main_queue_deregisterAsAlertSoundPolicySource;
- (void)_main_queue_registerAsAlertSoundPolicySource;
- (void)_main_queue_releaseAlertSuppressionAssertionIfNecessary;
- (void)_main_queue_takeAlertSuppressionAssertionIfNecessary;
- (_Bool)_main_queue_shouldTakeAlertSuppressionAssertion;
- (void)_queue_haltCurrentOperationIfNecessary;
- (void)_queue_waterLockEjectionOperationDidFinish;
- (void)_queue_startEjectionOperationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_setupEjectionOperationWithCompletion:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)playEjectionSoundWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

