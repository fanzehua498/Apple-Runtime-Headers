//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAIntentGroupHandleIntent.h>

@interface SAIntentGroupHandleIntent (INSExtensionService)
- (_Bool)ins_shouldUseExtendedFlowTimeout;
- (int)ins_analyticsEndEventType;
- (int)ins_analyticsBeginEventType;
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)ins_protobufEncodedIntent;
- (id)ins_jsonEncodedIntent;
@end

