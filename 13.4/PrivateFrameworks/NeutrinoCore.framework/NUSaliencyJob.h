//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class NUSaliencyRequest, VNSaliencyImageObservation;

@interface NUSaliencyJob : NURenderJob
{
    VNSaliencyImageObservation *_saliencyObservation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VNSaliencyImageObservation *saliencyObservation; // @synthesize saliencyObservation=_saliencyObservation;
- (void)cleanUp;
- (id)result;
- (_Bool)render:(out id *)arg1;
- (id)saliencyObservationForImage:(id)arg1 error:(out id *)arg2;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputImage;
- (id)scalePolicy;
@property(readonly, nonatomic) NUSaliencyRequest *saliencyRequest;
- (id)initWithRequest:(id)arg1;
- (id)initWithSaliencyRequest:(id)arg1;

@end

