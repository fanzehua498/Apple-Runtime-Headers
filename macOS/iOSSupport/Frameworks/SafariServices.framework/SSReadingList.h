//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface SSReadingList : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)defaultReadingList;
+ (BOOL)supportsURL:(id)arg1;
- (void).cxx_destruct;
- (void)_setUpConnectionIfNeeded;
- (BOOL)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3;
- (BOOL)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id *)arg4;
- (id)_init;
- (id)init;

@end

