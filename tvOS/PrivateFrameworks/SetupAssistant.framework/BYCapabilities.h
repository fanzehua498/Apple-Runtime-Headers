//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BYCapabilities : NSObject
{
}

+ (id)sharedCapabilities;
- (_Bool)mgHasGreenTea;
- (_Bool)mgHasCellularTelephony;
- (_Bool)mgHasMesa;
- (_Bool)mgHasSecureElement;
- (_Bool)mgHasSiriCapability;
- (_Bool)canShowAppleIDScreen;
- (_Bool)canShowPasscodeScreen;
- (_Bool)canShowFaceIDScreen;
- (_Bool)canShowTouchIDScreen;
- (_Bool)_paymentScreenRequirementsIncludeiCloud:(id)arg1;
- (_Bool)_paymentScreenRequirementsIncludePasscode:(id)arg1;
- (id)_paymentScreenRequirements;
- (_Bool)canShowPaymentScreen;
- (_Bool)canShowSiriScreen;
- (_Bool)supportsApplePay;
- (_Bool)isPearlEnrolled;
- (_Bool)supportsPearl;

@end

