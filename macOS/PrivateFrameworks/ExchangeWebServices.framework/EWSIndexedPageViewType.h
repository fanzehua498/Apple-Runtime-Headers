//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBasePagingType.h>

@interface EWSIndexedPageViewType : EWSBasePagingType
{
    long long _Offset;
    long long _BasePoint;
}

+ (id)definition;
@property(nonatomic) long long BasePoint; // @synthesize BasePoint=_BasePoint;
@property(nonatomic) long long Offset; // @synthesize Offset=_Offset;

@end

