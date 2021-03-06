//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKCompositeComponent.h>

@class WFCustomButtonComponent;

@interface WFNumberPickerButtonComponent : CKCompositeComponent
{
    _Bool _becomeFirstResponder;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _variableBlock;
    WFCustomButtonComponent *_buttonComponent;
}

+ (id)newWithAttributes:(const struct WFNumberPickerAttributes *)arg1 identifier:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 variableBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) _Bool becomeFirstResponder; // @synthesize becomeFirstResponder=_becomeFirstResponder;
@property(readonly, nonatomic) __weak WFCustomButtonComponent *buttonComponent; // @synthesize buttonComponent=_buttonComponent;
@property(readonly, nonatomic) CDUnknownBlockType variableBlock; // @synthesize variableBlock=_variableBlock;
@property(readonly, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
- (void).cxx_destruct;

@end

