//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreCDPUI/CDPUIBaseController.h>

#import <CoreCDPUI/CDPDevicePickerDelegate-Protocol.h>
#import <CoreCDPUI/CDPRemoteSecretEntryDelegate-Protocol.h>
#import <CoreCDPUI/KeychainSyncViewControllerDelegate-Protocol.h>

@class CDPContext, CDPDevicePickerViewController, CDPRecoveryKeyEntryViewModel, CDPRemoteDeviceSecretValidator, NSArray, NSNumber, NSString, UINavigationController, UIViewController;
@protocol CDPUIDelegate;

@interface CDPUIController : CDPUIBaseController <KeychainSyncViewControllerDelegate, CDPDevicePickerDelegate, CDPRemoteSecretEntryDelegate>
{
    NSArray *_devices;
    UINavigationController *_navController;
    CDPRemoteDeviceSecretValidator *_remoteSecretValidator;
    CDPDevicePickerViewController *_devicePicker;
    UIViewController *_rootViewController;
    _Bool _isUsingMultipleICSC;
    _Bool _isRandomICSC;
    _Bool _isNumericICSC;
    NSNumber *_icscNumericLength;
    CDPContext *_activeContext;
    CDPRecoveryKeyEntryViewModel *_recoveryKeyViewModel;
    _Bool _forceInlinePresentation;
    id <CDPUIDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceInlinePresentation; // @synthesize forceInlinePresentation=_forceInlinePresentation;
@property(nonatomic) __weak id <CDPUIDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)_beginWaitingForApprovalFlow;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)_showResetKeychainConfirmationAlertWithViewController:(id)arg1;
- (void)_setupDevicePickerController:(CDUnknownBlockType)arg1;
- (id)_remoteApprovalEscapeOption;
- (id)_escapeOffersForgotAllWithMask:(unsigned long long)arg1 presenter:(id)arg2 devices:(id)arg3;
- (id)_singleICSCEscapeOfferWithMask:(unsigned long long)arg1 withController:(id)arg2;
- (id)_localDeviceClass;
- (id)_waitingForApprovalEscapeOffer;
- (id)_enterSecretLaterEscapeOptionWithSecret:(unsigned long long)arg1;
- (id)_signInLaterEscapeOffer;
- (id)_signInLaterEscapeOption;
- (id)recoveryKeyEntryControllerForCircleJoinWithCancel:(_Bool)arg1;
- (id)_recoveryKeyEscapeOptionWithPresentationBlock:(CDUnknownBlockType)arg1;
- (id)_recoveryKeyEscapeOption;
- (id)_recoveryKeyEscapeOffer;
- (id)_resetAccountDataEscapeOption;
- (id)_escapeOfferForSingleApprovalWithMask:(unsigned long long)arg1;
- (id)_escapeOfferForMultiApprovalWithMask:(unsigned long long)arg1;
- (id)_deviceLimitOfferForDevice:(id)arg1;
- (id)_escapeOfferForDevice:(id)arg1 withMask:(unsigned long long)arg2;
- (void)_replaceViewController:(id)arg1 withNewController:(id)arg2;
- (void)_beginDevicePickerFlowFromEntryController:(id)arg1;
- (void)remoteSecretEntry:(id)arg1 depletedRemainingAttemptsForDevice:(id)arg2;
- (_Bool)performingAccountRecovery;
- (void)exceededMaximumAttemptsForRemoteSecretEntry:(id)arg1;
- (void)dismissRecoveryFlow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishValidation:(id)arg1 withError:(id)arg2;
- (void)performAccountReset:(id)arg1;
- (void)performRemoteApproval:(id)arg1;
- (void)performRecoveryKeyRecovery:(id)arg1;
- (void)cancelledRemoteSecretEntry:(id)arg1;
- (void)remoteSecretEntry:(id)arg1 didAcceptValidRemoteSecretForDevice:(id)arg2;
- (id)devicePicker:(id)arg1 escapeOffersForDevices:(id)arg2;
- (void)devicePicker:(id)arg1 didSelectDevice:(id)arg2;
- (void)cancelRemoteApprovalTapped:(id)arg1;
- (void)approveFromAnotherDevice:(_Bool)arg1;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(CDUnknownBlockType)arg2;
- (void)_presentRemoteApprovalViewControllerWithEscapeOfferMask:(unsigned long long)arg1;
- (void)_presentRemoteSecretControllerWithNewestDevice:(id)arg1;
- (id)_remoteSecretControllerForDevice:(id)arg1;
- (id)_remoteSecretControllerForNewestDevice:(id)arg1;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(_Bool)arg3 validator:(id)arg4;
- (id)_recoveryKeyControllerWithContext:(id)arg1 validator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 promptForRecoveryKeyWithValidator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 confirmRecoveryKeyWithValidator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 presentRecoveryKeyWithValidator:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 beginRemoteApprovalWithValidator:(id)arg2;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(CDUnknownBlockType)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(_Bool)arg2 numericLength:(id)arg3 isRandom:(_Bool)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withDefaultIndex:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(CDUnknownBlockType)arg2;
- (void)_presentRootController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dismissPresentedViewControllerCompletion:(CDUnknownBlockType)arg1;
- (void)handleBackPopCompletion;
- (void)backTappedFromRoot:(id)arg1;
- (void)cancelTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

