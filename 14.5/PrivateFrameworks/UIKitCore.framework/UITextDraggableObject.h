//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSItemProvider, UITextRange;

@interface UITextDraggableObject : NSObject
{
    NSItemProvider *_itemProvider;
    UITextRange *_range;
    CDUnknownBlockType _targetedPreviewProvider;
    CDUnknownBlockType _previewProvider;
}

+ (id)draggableObjectWithItemProvider:(id)arg1 fromRange:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType previewProvider; // @synthesize previewProvider=_previewProvider;
@property(copy, nonatomic) CDUnknownBlockType targetedPreviewProvider; // @synthesize targetedPreviewProvider=_targetedPreviewProvider;
@property(retain, nonatomic) UITextRange *range; // @synthesize range=_range;
@property(retain, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;

@end

