//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNMultiValuePropertyDescription.h>

@class NSArray;

@interface CNCompoundMultiValuePropertyDescription : CNMultiValuePropertyDescription
{
}

- (id)stringForIndexingForContact:(id)arg1;
@property(readonly, nonatomic) NSArray *summarizationKeys;
@property(readonly, nonatomic) CDUnknownBlockType fromDictionaryTransform;
@property(readonly, nonatomic) CDUnknownBlockType dictionaryTransform;
- (CDUnknownBlockType)fromPlistTransform;
- (CDUnknownBlockType)plistTransform;

@end

