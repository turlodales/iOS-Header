//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSString;

@interface PGGraphIngestPersonBiologicalSexProcessor : NSObject <PGGraphIngestProcessor>
{
}

- (id)_sexDescriptionForBiologicalSex:(unsigned long long)arg1;
- (unsigned long long)sexForFaces:(id)arg1 personDescription:(id)arg2;
- (unsigned long long)_sexForPersonNode:(id)arg1 graph:(id)arg2;
- (unsigned short)_phBiologicalSexFromIngestBiologicalSex:(unsigned long long)arg1;
- (void)_writeBiologicalSexByPerson:(id)arg1 toPhotoLibrary:(id)arg2;
- (void)processPersonBiologicalSexForPersonNodes:(id)arg1 graph:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

