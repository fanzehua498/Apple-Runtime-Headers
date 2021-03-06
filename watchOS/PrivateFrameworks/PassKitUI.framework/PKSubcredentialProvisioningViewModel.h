//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKSubcredentialProvisioningViewModelProtocol-Protocol.h>

@class NSString, PKSubcredentialProvisioningConfiguration, PKSubcredentialProvisioningController;

@interface PKSubcredentialProvisioningViewModel : NSObject <PKSubcredentialProvisioningViewModelProtocol>
{
    PKSubcredentialProvisioningController *_provisioningController;
    PKSubcredentialProvisioningConfiguration *_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKSubcredentialProvisioningConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) PKSubcredentialProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
- (void)setNewAuthRandomIfNecessaryWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)startProvisioning;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

