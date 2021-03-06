//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpotlight/CSSearchQuery.h>

@class CSFilesSearchQueryContext, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CSFilesSearchQuery : CSSearchQuery
{
    BOOL _completed;
    NSObject<OS_dispatch_queue> *_queue;
    struct __MDQuery *_mdQuery;
    CSFilesSearchQueryContext *_context;
    NSMutableSet *_processedItems;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSMutableSet *processedItems; // @synthesize processedItems=_processedItems;
@property(retain, nonatomic) CSFilesSearchQueryContext *context; // @synthesize context=_context;
@property(nonatomic) struct __MDQuery *mdQuery; // @synthesize mdQuery=_mdQuery;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)cancel;
- (void)start;
- (void)handleNotification:(id)arg1;
- (void)dealloc;
- (id)initWithQueryString:(id)arg1 attributes:(id)arg2 scopes:(id)arg3;
- (id)initWithQueryString:(id)arg1 context:(id)arg2;

@end

