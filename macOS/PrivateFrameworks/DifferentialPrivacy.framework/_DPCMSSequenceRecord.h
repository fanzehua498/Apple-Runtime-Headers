//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DifferentialPrivacy/_DPCMSRecord.h>

@class NSData, NSString;

@interface _DPCMSSequenceRecord : _DPCMSRecord
{
    short _sequenceHashIndex;
    NSData *_sequence;
    NSString *_plainSequence;
}

+ (id)entityName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *plainSequence; // @synthesize plainSequence=_plainSequence;
@property(nonatomic) short sequenceHashIndex; // @synthesize sequenceHashIndex=_sequenceHashIndex;
@property(retain, nonatomic) NSData *sequence; // @synthesize sequence=_sequence;
- (id)jsonString;
- (BOOL)copyFromManagedObject:(id)arg1;
- (BOOL)copyToManagedObject:(id)arg1;
- (id)description;
- (id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 creationDate:(double)arg5 submitted:(BOOL)arg6 objectId:(id)arg7;

@end

