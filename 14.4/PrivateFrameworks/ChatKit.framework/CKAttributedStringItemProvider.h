//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/NSItemProviderWriting-Protocol.h>

@class NSArray, NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface CKAttributedStringItemProvider : NSObject <NSItemProviderWriting>
{
    NSAttributedString *_attributedString;
}

+ (id)writableTypeIdentifiersForItemProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (id)initWithAttributedString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

