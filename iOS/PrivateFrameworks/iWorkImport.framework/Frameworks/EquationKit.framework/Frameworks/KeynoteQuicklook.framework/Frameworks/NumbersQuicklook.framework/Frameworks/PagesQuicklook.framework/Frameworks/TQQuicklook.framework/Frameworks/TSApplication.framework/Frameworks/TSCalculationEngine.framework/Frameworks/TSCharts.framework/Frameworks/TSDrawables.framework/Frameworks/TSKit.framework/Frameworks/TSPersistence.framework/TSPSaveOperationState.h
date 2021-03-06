//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable;

@interface TSPSaveOperationState : NSObject
{
    NSMapTable *_newDataStorages;
    NSHashTable *_remoteData;
    int _sampleID;
    long long _updateType;
}

- (void).cxx_destruct;
@property(nonatomic) int sampleID; // @synthesize sampleID=_sampleID;
@property(readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;
@property(readonly, nonatomic) _Bool inheritAttributes;
@property(readonly, nonatomic) _Bool isSavingCurrentDocument;
@property(readonly, nonatomic) _Bool shouldUpdate;
@property(readonly, nonatomic) _Bool hasRemoteData;
- (void)addRemoteData:(id)arg1;
- (void)enumerateDatasAndStoragesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasNewStorageForData:(id)arg1;
- (void)addNewStorage:(id)arg1 forData:(id)arg2;
- (id)initWithUpdateType:(long long)arg1;
- (id)init;

@end

