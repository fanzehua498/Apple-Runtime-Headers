//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UILabelContent.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UILabelAttributedStringContent : _UILabelContent
{
    NSAttributedString *_attributedString;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)_isContentEqualToContent:(id)arg1;
- (_Bool)isEqualToAttributedString:(id)arg1;
- (_Bool)isEqualToString:(id)arg1;
- (id)attributedString;
- (id)string;
- (_Bool)isWidthVariant;
- (_Bool)isAttributed;
- (_Bool)isNil;
- (long long)length;
- (id)attributedStringContent;
- (id)defaultValueForAttribute:(id)arg1;
- (_Bool)isAttribute:(id)arg1 uniformlyEqualToValue:(id)arg2;
- (id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(struct _NSRange)arg3;
- (id)contentByApplyingAttributeToEntireRange:(id)arg1 value:(id)arg2;
- (id)contentWithString:(id)arg1;
- (id)initWithAttributedString:(id)arg1 defaultAttributesProvider:(id)arg2;

@end

