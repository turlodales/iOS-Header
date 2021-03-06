//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFDialogRequest.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString, WFDialogButton;

@interface WFChooseFromListDialogRequest : WFDialogRequest <NSSecureCoding>
{
    _Bool _allowsMultipleSelection;
    NSArray *_items;
    NSString *_message;
    WFDialogButton *_doneButton;
    WFDialogButton *_cancelButton;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) WFDialogButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, copy, nonatomic) WFDialogButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *emptyStateMessage;
- (id)initWithItems:(id)arg1 allowsMultipleSelection:(_Bool)arg2 message:(id)arg3 attribution:(id)arg4 prompt:(id)arg5;

@end

