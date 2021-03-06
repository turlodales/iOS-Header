//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

#import <WorkflowKit/WFCodableAttributeBackedParameter-Protocol.h>

@class INCodableAttribute, INObjectCollection, INStringLocalizer, NSString;

@interface WFCustomIntentDynamicEnumerationParameter : WFDynamicEnumerationParameter <WFCodableAttributeBackedParameter>
{
    INCodableAttribute *_codableAttribute;
    INStringLocalizer *_stringLocalizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) INStringLocalizer *stringLocalizer; // @synthesize stringLocalizer=_stringLocalizer;
@property(retain, nonatomic) INCodableAttribute *codableAttribute; // @synthesize codableAttribute=_codableAttribute;
- (void)getStatesWithSearchTerm:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)displaysMultipleValueEditor;
- (_Bool)parameterStateIsValid:(id)arg1;
- (_Bool)hidesSubtitleInEditor;
- (id)localizedSubtitleLabelForPossibleState:(id)arg1;
- (id)accessoryIconForPossibleState:(id)arg1;
- (Class)singleStateClass;
@property(readonly, nonatomic) NSString *localizedConfigurationPromptDialog;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) INObjectCollection *possibleStatesCollection;
@property(readonly) Class superclass;

@end

