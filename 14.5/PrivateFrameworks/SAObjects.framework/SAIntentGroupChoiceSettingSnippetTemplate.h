//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAIntentGroupSettingSnippetTemplate.h>

@protocol SAServerBoundCommand;

@interface SAIntentGroupChoiceSettingSnippetTemplate : SAIntentGroupSettingSnippetTemplate
{
}

+ (id)choiceSettingSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)choiceSettingSnippetTemplate;
@property(retain, nonatomic) id <SAServerBoundCommand> updateSlotCommand;
@property(nonatomic) _Bool selected;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

