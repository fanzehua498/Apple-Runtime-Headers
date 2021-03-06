//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitClient/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NNMKProtoImageAttachmentSync : PBCodable <NSCopying>
{
    NSString *_contentId;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSData *_imageData;
    NSString *_messageId;
    CDStruct_a125a100 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasImageData;
@property(readonly, nonatomic) _Bool hasContentId;
@property(readonly, nonatomic) _Bool hasMessageId;
@property(readonly, nonatomic) _Bool hasDateSynced;
@property(nonatomic) _Bool hasFullSyncVersion;

@end

