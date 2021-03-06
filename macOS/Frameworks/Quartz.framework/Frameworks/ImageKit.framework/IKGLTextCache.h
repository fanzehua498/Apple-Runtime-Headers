//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKLinkedList, IKLinkedListNodePool, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface IKGLTextCache : NSObject
{
    NSMutableDictionary *_cachedStrings;
    struct __CFDictionary *_perSizeCaches;
    struct CGSize _size;
    double _scaleFactor;
    IKLinkedList *_listOfCachedInfo;
    IKLinkedListNodePool *_nodePool;
    unsigned int _session;
}

- (unsigned long long)cacheStringCount;
- (unsigned long long)pageCount;
- (void)bumpSession;
- (id)cachedTextForText:(id)arg1;
- (void)storeText:(id)arg1;
- (BOOL)purgeItemsOutOfDate;
- (void)empty;
- (void)removeTextNode:(id)arg1;
- (void)_cleanupCacheStackWithSize:(int)arg1 page:(unsigned int)arg2;
- (id)cacheForSize:(int)arg1 page:(unsigned int)arg2;
- (id)_generateCachePageForSize:(int)arg1 pageIndex:(unsigned int *)arg2;
- (id)cachesForSize:(int)arg1;
- (long long)segmentHeightForFontSize:(int)arg1;
- (struct CGSize)size;
- (void)finalize;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 scaleFactor:(double)arg2;

@end

