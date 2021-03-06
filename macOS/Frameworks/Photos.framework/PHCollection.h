//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHObject.h>

@class NSArray, NSDate, NSManagedObjectID, NSSortDescriptor, NSString;
@protocol PHCollectionPresentationHints;

@interface PHCollection : PHObject
{
    BOOL _customSortAscending;
    unsigned int _customSortKey;
    unsigned long long _estimatedPhotosCount;
    unsigned long long _estimatedVideosCount;
    NSDate *_creationDate;
    NSString *_localizedSubtitle;
}

+ (id)fetchMomentsForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchTopLevelUserCollectionsWithOptions:(id)arg1;
+ (id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyMap;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)fetchType;
+ (id)managedEntityName;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int customSortKey; // @synthesize customSortKey=_customSortKey;
@property(readonly, nonatomic) BOOL customSortAscending; // @synthesize customSortAscending=_customSortAscending;
@property(readonly, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) unsigned long long estimatedVideosCount; // @synthesize estimatedVideosCount=_estimatedVideosCount;
@property(readonly, nonatomic) unsigned long long estimatedPhotosCount; // @synthesize estimatedPhotosCount=_estimatedPhotosCount;
- (id)description;
@property(readonly, copy, nonatomic) id <PHCollectionPresentationHints> presentationHints;
@property(readonly, nonatomic) BOOL isUserSmartAlbum;
@property(readonly, nonatomic) BOOL isAlbumContentTitleSort;
@property(readonly, nonatomic) BOOL isAlbumContentSort;
@property(readonly, copy, nonatomic) NSSortDescriptor *defaultSortDescriptor;
@property(readonly, copy, nonatomic) NSString *effectiveCustomSortKey;
- (id)_effectiveSortDescriptorsFromCustomSortKey:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *effectiveCustomSortDescriptors;
- (unsigned long long)ancestryIndexOfCollectionList:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) NSManagedObjectID *parentFolderID;
- (unsigned long long)collectionFixedOrderPriority;
- (BOOL)collectionHasFixedOrder;
@property(readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property(readonly, nonatomic) BOOL hasLocationInfo;
@property(readonly, nonatomic) BOOL hasLocalizedTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
- (BOOL)canPerformEditOperation:(long long)arg1;
@property(readonly, nonatomic) BOOL canContainCollections;
@property(readonly, nonatomic) BOOL canContainAssets;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)objectReference;

@end

