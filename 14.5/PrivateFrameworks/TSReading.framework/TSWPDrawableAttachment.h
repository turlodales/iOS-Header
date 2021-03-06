//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPAttachment.h>

@class TSDDrawableInfo;

@interface TSWPDrawableAttachment : TSWPAttachment
{
    TSDDrawableInfo *_drawableInfo;
    int _hOffsetType;
    double _hOffset;
    int _vOffsetType;
    double _vOffset;
    int _vAlignment;
    double _attachmentAnchorY;
}

+ (void)setPositionerClass:(Class)arg1;
@property(nonatomic) double attachmentAnchorY; // @synthesize attachmentAnchorY=_attachmentAnchorY;
@property(nonatomic) int vAlignment; // @synthesize vAlignment=_vAlignment;
@property(nonatomic) double vOffset; // @synthesize vOffset=_vOffset;
@property(nonatomic) int vOffsetType; // @synthesize vOffsetType=_vOffsetType;
@property(nonatomic) double hOffset; // @synthesize hOffset=_hOffset;
@property(nonatomic) int hOffsetType; // @synthesize hOffsetType=_hOffsetType;
@property(readonly, retain, nonatomic) TSDDrawableInfo *drawable; // @synthesize drawable=_drawableInfo;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)infoChanged;
- (unsigned long long)enabledKnobMask;
- (_Bool)specifiesEnabledKnobMask;
- (_Bool)isSearchable;
- (Class)positionerClass;
- (_Bool)isAnchored;
- (_Bool)isPartitioned;
- (_Bool)isDrawable;
- (_Bool)isHTMLWrap;
- (void)setParentStorage:(id)arg1;
- (void)attachDrawable:(id)arg1;
- (id)detachDrawable;
- (void)invalidate;
@property(readonly, nonatomic) double descent;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 drawable:(id)arg2;
- (id)init;
- (void)dealloc;
- (int)elementKind;
- (id)textStorages;
- (id)textRepresentationForCopy;

@end

