//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MapsSuggestionsSignalPackCache : NSObject
{
    NSMutableArray *_mapItems;
    NSMutableArray *_signalPacks;
    NSMutableArray *_entries;
}

- (void).cxx_destruct;
- (unsigned long long)_count;
- (void)_removeObjectsAtIndex:(unsigned long long)arg1;
- (_Bool)_popRow;
- (id)signalPackForMapItem:(id)arg1;
- (id)_containsSignalPackForMapItem:(id)arg1;
- (void)_removeExpiredEntries;
- (_Bool)insertMapItem:(id)arg1 signalPack:(id)arg2 entry:(id)arg3;
- (id)init;

@end

