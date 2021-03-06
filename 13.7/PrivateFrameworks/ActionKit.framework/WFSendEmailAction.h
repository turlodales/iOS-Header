//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFSendEmailAction : WFHandleCustomIntentAction
{
    _Bool _contentManaged;
}

@property(nonatomic, getter=isContentManaged) _Bool contentManaged; // @synthesize contentManaged=_contentManaged;
- (id)targetDataInfo;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(_Bool)arg2;
- (void)generateEmailFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateFilesFromCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateContentForIntents:(CDUnknownBlockType)arg1;
- (void)getRecipientsFromParameterKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)generatedAccessResource;
- (_Bool)populatesInputFromInputParameter;

@end

