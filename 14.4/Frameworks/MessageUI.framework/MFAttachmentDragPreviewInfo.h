//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageUI/NSSecureCoding-Protocol.h>

@class UIImage;

@interface MFAttachmentDragPreviewInfo : NSObject <NSSecureCoding>
{
    _Bool _isInlineImage;
    UIImage *_image;
    struct CGPoint _center;
    struct CGSize _displaySize;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize displaySize; // @synthesize displaySize=_displaySize;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) _Bool isInlineImage; // @synthesize isInlineImage=_isInlineImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)targetedDragPreviewInContainer:(id)arg1 centerOffset:(struct CGPoint)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

