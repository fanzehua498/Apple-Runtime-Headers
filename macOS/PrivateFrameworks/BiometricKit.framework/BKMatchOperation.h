//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BiometricKit/BKOperation.h>

@class NSData, NSNumber;
@protocol BKMatchOperationDelegate;

@interface BKMatchOperation : BKOperation
{
    BOOL _stopOnSuccess;
    BOOL _captureOnly;
    long long _purpose;
    NSNumber *_userID;
    long long _priority;
    NSData *_credentialSet;
    long long _useCase;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL captureOnly; // @synthesize captureOnly=_captureOnly;
@property(nonatomic) BOOL stopOnSuccess; // @synthesize stopOnSuccess=_stopOnSuccess;
@property(nonatomic) long long useCase; // @synthesize useCase=_useCase;
@property(copy, nonatomic) NSData *credentialSet; // @synthesize credentialSet=_credentialSet;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(nonatomic) long long purpose; // @synthesize purpose=_purpose;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (id)matchResultInfoWithServerIdentity:(id)arg1 details:(id)arg2;
- (void)startBioOperation:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (id)optionsDictionaryWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <BKMatchOperationDelegate> delegate; // @dynamic delegate;

@end

