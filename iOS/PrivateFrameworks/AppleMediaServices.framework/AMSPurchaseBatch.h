//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSLazyPromise, NSLock, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMSPurchaseBatch : NSObject
{
    _Bool _isComplete;
    NSMutableArray *_contexts;
    NSLock *_lock;
    NSMutableDictionary *_contextMap;
    NSMutableArray *_results;
    AMSLazyPromise *_promise;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AMSLazyPromise *promise; // @synthesize promise=_promise;
@property(readonly, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(readonly, nonatomic) NSMutableDictionary *contextMap; // @synthesize contextMap=_contextMap;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSMutableArray *contexts; // @synthesize contexts=_contexts;
- (id)nextPurchaseContext;
- (_Bool)finishContext:(id)arg1 withResult:(id)arg2;
- (_Bool)finishContext:(id)arg1 withError:(id)arg2;
- (id)contextForPurchaseId:(id)arg1;
- (id)initWithContexts:(id)arg1 weakPromise:(id)arg2;

@end

