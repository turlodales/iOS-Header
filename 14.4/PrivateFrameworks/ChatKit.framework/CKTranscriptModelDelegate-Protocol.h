//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKTranscriptModel, UITraitCollection;

@protocol CKTranscriptModelDelegate <NSObject>
- (double)itemMaxWidthForModel:(CKTranscriptModel *)arg1;
- (double)balloonMaxWidthForModel:(CKTranscriptModel *)arg1;
- (UITraitCollection *)traitCollectionForModel:(CKTranscriptModel *)arg1;
- (void)transcriptModelDidChange:(CKTranscriptModel *)arg1;
@end

