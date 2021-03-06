//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString, SAIntentGroupDetailLabelTemplateComponent, SALocation, SAUIColor;
@protocol SAIntentGroupSetMapLocation;

@interface SAIntentGroupMapSnippetTemplate : SAIntentGroupSnippetTemplate
{
}

+ (id)mapSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mapSnippetTemplate;
@property(retain, nonatomic) id <SAIntentGroupSetMapLocation> updateLocationCommand;
@property(copy, nonatomic) NSString *mapSize;
@property(retain, nonatomic) SALocation *location;
@property(nonatomic) _Bool interactive;
@property(retain, nonatomic) SAIntentGroupDetailLabelTemplateComponent *detailLabelComponent;
@property(retain, nonatomic) SAUIColor *color;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

