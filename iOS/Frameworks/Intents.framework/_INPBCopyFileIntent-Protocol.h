//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBFileProperty, _INPBIntentMetadata, _INPBString;

@protocol _INPBCopyFileIntent <NSObject>
+ (Class)propertiesType;
@property(nonatomic) _Bool hasSourceType;
@property(nonatomic) int sourceType;
@property(readonly, nonatomic) _Bool hasSourceName;
@property(retain, nonatomic) _INPBString *sourceName;
@property(readonly, nonatomic) unsigned long long propertiesCount;
@property(copy, nonatomic) NSArray *properties;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasEntityType;
@property(nonatomic) int entityType;
@property(readonly, nonatomic) _Bool hasEntityName;
@property(retain, nonatomic) _INPBString *entityName;
@property(nonatomic) _Bool hasDestinationType;
@property(nonatomic) int destinationType;
@property(readonly, nonatomic) _Bool hasDestinationName;
@property(retain, nonatomic) _INPBString *destinationName;
- (int)StringAsSourceType:(NSString *)arg1;
- (NSString *)sourceTypeAsString:(int)arg1;
- (_INPBFileProperty *)propertiesAtIndex:(unsigned long long)arg1;
- (void)addProperties:(_INPBFileProperty *)arg1;
- (void)clearProperties;
- (int)StringAsEntityType:(NSString *)arg1;
- (NSString *)entityTypeAsString:(int)arg1;
- (int)StringAsDestinationType:(NSString *)arg1;
- (NSString *)destinationTypeAsString:(int)arg1;
@end

