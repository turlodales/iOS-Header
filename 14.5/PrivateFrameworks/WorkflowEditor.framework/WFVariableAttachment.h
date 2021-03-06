//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

#import <WorkflowEditor/NSCopying-Protocol.h>
#import <WorkflowEditor/WFVariableDelegate-Protocol.h>

@class NSString, UIColor, UIFont, WFVariable, WFVariableAttachmentCell;

@interface WFVariableAttachment : NSTextAttachment <WFVariableDelegate, NSCopying>
{
    _Bool _enabled;
    _Bool _selected;
    _Bool _highlighted;
    UIFont *_font;
    UIColor *_tintColor;
    WFVariable *_variable;
    NSString *_overrideVariableName;
    WFVariableAttachmentCell *_wf_attachmentCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFVariableAttachmentCell *wf_attachmentCell; // @synthesize wf_attachmentCell=_wf_attachmentCell;
@property(copy, nonatomic) NSString *overrideVariableName; // @synthesize overrideVariableName=_overrideVariableName;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) WFVariable *variable; // @synthesize variable=_variable;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (id)attachmentCell;
- (id)accessibilityLabel;
- (void)variableDidChange:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithVariable:(id)arg1;

@end

