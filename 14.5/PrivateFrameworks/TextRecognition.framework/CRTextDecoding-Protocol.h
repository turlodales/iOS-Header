//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextRecognition/NSObject-Protocol.h>

@class CRRecognizerConfiguration, NSObject;
@protocol CRTextRecognizerModel, CRTextRecognizerModelOutput;

@protocol CRTextDecoding <NSObject>
- (_Bool)shouldDecodeWithLM;
- (void)decodeOutput:(NSObject<CRTextRecognizerModelOutput> *)arg1 imageSize:(struct CGSize)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(CRRecognizerConfiguration *)arg1 model:(NSObject<CRTextRecognizerModel> *)arg2 error:(id *)arg3;
@end

