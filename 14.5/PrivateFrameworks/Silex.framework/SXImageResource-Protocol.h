//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXResource-Protocol.h>

@class NSString;

@protocol SXImageResource <SXResource>
@property(readonly, nonatomic) _Bool wideColorSpace;
@property(readonly, nonatomic) NSString *imageIdentifier;
@property(readonly, nonatomic) struct CGSize dimensions;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFills:(struct CGSize)arg1;
- (double)widthForImageHeight:(double)arg1;
- (double)heightForImageWidth:(double)arg1;
@end

