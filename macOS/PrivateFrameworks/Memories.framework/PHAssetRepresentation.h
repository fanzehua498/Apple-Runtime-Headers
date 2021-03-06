//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, PHAsset, PHAssetResource;

__attribute__((visibility("hidden")))
@interface PHAssetRepresentation : NSObject
{
    BOOL _isAvailable;
    BOOL _adjustedVersion;
    unsigned long long _lastKnownPersistenceState;
    PHAssetResource *_mostUsefulResource;
    NSString *_localIdentifier;
    NSDate *_modificationDate;
    unsigned long long _downloadState;
    double _downloadProgress;
    NSDate *_downloadRequestDate;
    PHAsset *_asset;
    long long _mediaType;
}

+ (id)assetRepresentationWithPhotosIdentifierURL:(id)arg1;
+ (id)assetRepresentationWithAssetsLibraryPersistentURL:(id)arg1;
+ (id)assetRepresentationWithIdentifierURL:(id)arg1;
+ (id)assetRepresentationWithAsset:(id)arg1 adjustedVersion:(BOOL)arg2;
+ (void)_cacheAssetRepresentation:(id)arg1;
+ (id)_cachedAssetRepresentationWithIdentifier:(id)arg1 adjustedVersion:(BOOL)arg2;
+ (void)clearStaticCache;
+ (void)initialize;
+ (void)createStaticCache;
- (void).cxx_destruct;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(nonatomic, getter=isAdjustedVersion) BOOL adjustedVersion; // @synthesize adjustedVersion=_adjustedVersion;
@property(retain, nonatomic) NSDate *downloadRequestDate; // @synthesize downloadRequestDate=_downloadRequestDate;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) unsigned long long downloadState; // @synthesize downloadState=_downloadState;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(nonatomic) unsigned long long lastKnownPersistenceState; // @synthesize lastKnownPersistenceState=_lastKnownPersistenceState;
- (id)handleRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3;
- (id)handleVideoRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3;
- (id)handlePlayerItemRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3;
- (int)requestImageWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 imageManager:(id)arg3;
- (int)requestImageWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (int)requestImageWithResultHandler:(CDUnknownBlockType)arg1;
- (int)requestThumbnailWithResultHandler:(CDUnknownBlockType)arg1 synchronous:(BOOL)arg2 networkAccessAllowed:(BOOL)arg3;
- (int)requestImageDataWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 synchronous:(BOOL)arg3;
- (int)requestImageDataWithResultHandler:(CDUnknownBlockType)arg1 synchronous:(BOOL)arg2;
- (int)requestImageDataWithResultHandler:(CDUnknownBlockType)arg1;
- (int)requestVideoWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 imageManager:(id)arg3;
- (int)requestVideoWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (int)requestVideoWithResultHandler:(CDUnknownBlockType)arg1;
- (int)requestExportSessionWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (int)requestPlayerItemWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 networkAccessAllowed:(BOOL)arg3;
- (int)requestMediaWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)estimatedFileSize;
- (struct CGSize)imageSize;
- (struct CGImage *)cgimageWithSize:(struct CGSize)arg1 imageManager:(id)arg2;
- (struct CGImage *)cgimageWithSize:(struct CGSize)arg1;
- (id)imageWithSize:(struct CGSize)arg1 imageManager:(id)arg2;
- (id)imageWithSize:(struct CGSize)arg1;
- (id)image;
- (id)imageData;
- (id)thumbnailImage;
- (id)avAsset;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)identifierURL;
- (id)initWithAsset:(id)arg1 localIdentifier:(id)arg2 adjustedVersion:(BOOL)arg3 modificationDate:(id)arg4 mediaType:(long long)arg5;
- (id)initWithAsset:(id)arg1 adjustedVersion:(BOOL)arg2;
- (id)initWithLocalIdentifier:(id)arg1 adjustedVersion:(BOOL)arg2 modificationDate:(id)arg3 mediaType:(long long)arg4;
- (BOOL)isDownloading;
- (void)queryLastKnownPersistenceState;
@property(readonly, nonatomic) NSString *derivativeFilePath;
- (id)privateVideoFileURL;
- (id)privateFileURL;
- (id)privateFileURLForResource:(id)arg1;
- (BOOL)isDerivativeFilePathPointingToJPEGorRAWorHEIFFile;
- (BOOL)isHEIF;
@property(readonly) PHAssetResource *mostUsefulResource; // @synthesize mostUsefulResource=_mostUsefulResource;

@end

