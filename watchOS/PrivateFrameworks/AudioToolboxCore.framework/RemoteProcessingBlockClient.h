//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RemoteProcessingBlockClient : NSObject
{
}

+ (long)setItemParameter:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2 inItemID:(unsigned int)arg3 inParameterID:(unsigned int)arg4 inScope:(unsigned int)arg5 inElement:(unsigned int)arg6 inValue:(float)arg7;
+ (long)getItemParameter:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2 inItemID:(unsigned int)arg3 inParameterID:(unsigned int)arg4 inScope:(unsigned int)arg5 inElement:(unsigned int)arg6 outValue:(float *)arg7;
+ (long)setItemProperty:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2 inItemID:(unsigned int)arg3 inPropertyID:(unsigned int)arg4 inScope:(unsigned int)arg5 inElement:(unsigned int)arg6 inData:(id)arg7;
+ (long)copyItemProperty:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2 inItemID:(unsigned int)arg3 inPropertyID:(unsigned int)arg4 inScope:(unsigned int)arg5 inElement:(unsigned int)arg6 outData:(id *)arg7;
+ (long)setProperty:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2 inPropertyID:(unsigned int)arg3 inData:(id)arg4;
+ (long)copyProperty:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2 inPropertyID:(unsigned int)arg3 outData:(id *)arg4;
+ (long)removeRPBPropertyListener:(id)arg1 inPropertyID:(unsigned int)arg2 inServerID:(unsigned int)arg3 inRPBlockID:(unsigned int)arg4;
+ (long)addRPBPropertyListener:(id)arg1 inPropertyID:(unsigned int)arg2 inServerID:(unsigned int)arg3 inRPBlockID:(unsigned int)arg4;
+ (long)removeRPBListener:(id)arg1;
+ (long)addRPBListener:(id)arg1;

@end

