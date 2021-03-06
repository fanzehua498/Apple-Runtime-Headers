//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGenericIntentResponse-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBGenericIntentResponse : PBCodable <_INPBGenericIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBIntentMetadata *_metadata;
    NSArray *_properties;
}

+ (_Bool)supportsSecureCoding;
+ (Class)propertiesType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) _INPBIntentMetadata *metadata; // @synthesize metadata=_metadata;
- (id)dictionaryRepresentation;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)propertiesAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int propertiesCount;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
@property(readonly, nonatomic) _Bool hasMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

