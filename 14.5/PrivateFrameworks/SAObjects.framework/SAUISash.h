//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, SAUIColor, SAUIImageResource;

@interface SAUISash : AceObject <SAAceSerializable>
{
}

+ (id)sashWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sash;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SAUIColor *textColor;
@property(retain, nonatomic) SAUIImageResource *image;
@property(copy, nonatomic) NSArray *commands;
@property(retain, nonatomic) SAUIColor *backgroundColor;
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

