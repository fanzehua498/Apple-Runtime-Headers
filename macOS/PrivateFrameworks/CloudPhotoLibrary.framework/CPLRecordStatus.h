//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLRecordChange, NSString;

@interface CPLRecordStatus : NSObject <NSSecureCoding>
{
    union {
        struct {
            unsigned int unknown:1;
            unsigned int quarantined:1;
            unsigned int resetting:1;
            unsigned int uploaded:1;
            unsigned int waitingForUpload:1;
            unsigned int uploading:1;
            unsigned int waitingForUpdate:1;
            unsigned int updating:1;
            unsigned int confirmed:1;
        } status;
        unsigned int packedStatus;
    } _status;
    CPLRecordChange *_record;
    unsigned long long _generation;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(readonly, nonatomic) CPLRecordChange *record; // @synthesize record=_record;
- (id)description;
@property(readonly, nonatomic) NSString *statusDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2;
@property(nonatomic, getter=isConfirmed) BOOL confirmed;
@property(nonatomic, getter=isUpdating) BOOL updating;
@property(nonatomic, getter=isWaitingForUpdate) BOOL waitingForUpdate;
@property(nonatomic, getter=isUploading) BOOL uploading;
@property(nonatomic, getter=isWaitingForUpload) BOOL waitingForUpload;
@property(nonatomic, getter=isUploaded) BOOL uploaded;
@property(nonatomic, getter=isResetting) BOOL resetting;
@property(nonatomic, getter=isQuarantined) BOOL quarantined;
@property(nonatomic, getter=isUnknown) BOOL unknown;

@end

