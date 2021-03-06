//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <TSText/TSDArchivedHint-Protocol.h>

@class NSString, TSWPTOCLayoutHint;
@protocol TSDHint;

@interface TSWPTOCArchivedLayoutHint : TSPObject <TSDArchivedHint>
{
    TSWPTOCLayoutHint *_hint;
}

- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 hint:(id)arg2;
@property(retain, nonatomic) id <TSDHint> hint;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

