//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage, UIView;

@interface CUISApplicationPlaceholderContent : NSObject
{
    UIView *_view;
    UIImage *_image;
    unsigned int _contentType;
}

+ (id)contentWithImage:(id)arg1;
+ (id)contentWithView:(id)arg1;
- (void).cxx_destruct;
- (id)image;
- (id)view;
- (void)setContentType:(unsigned int)arg1;
- (unsigned int)contentType;
- (id)initWithImage:(id)arg1;
- (id)initWithView:(id)arg1;

@end

