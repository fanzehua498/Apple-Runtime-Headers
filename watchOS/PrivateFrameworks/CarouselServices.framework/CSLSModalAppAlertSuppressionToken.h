//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CarouselServices/CSLSAlertSuppressionToken.h>

@class NSArray;

@interface CSLSModalAppAlertSuppressionToken : CSLSAlertSuppressionToken
{
    NSArray *_allowingServices;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *allowingServices; // @synthesize allowingServices=_allowingServices;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 allowingServices:(id)arg2;

@end

