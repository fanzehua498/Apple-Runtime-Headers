//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchKit/WKInterfaceObject.h>

#import <WatchKit/WKImageAnimatable-Protocol.h>

@class NSString;

@interface WKInterfaceGroup : WKInterfaceObject <WKImageAnimatable>
{
}

- (void)stopAnimating;
- (void)startAnimatingWithImagesInRange:(struct _NSRange)arg1 duration:(double)arg2 repeatCount:(int)arg3;
- (void)startAnimating;
- (void)setBackgroundImageNamed:(id)arg1;
- (void)setBackgroundImageData:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setCornerRadius:(float)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

