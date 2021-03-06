//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel, NSString;

@interface PPTopicMapping : NSObject
{
    NSString *_mappingId;
    MLModel *_topicModel;
    MLModel *_locationModel;
    MLModel *_entityModel;
    MLModel *_unmappingModel;
    MLModel *_activationModel;
    MLModel *_unmappingActivationModel;
}

+ (id)_renamePreviousRecord:(id)arg1;
+ (id)_fetchNumberedListOfModels:(id)arg1;
+ (_Bool)_modelExists:(id)arg1;
- (void).cxx_destruct;
- (id)unmappedTopics:(id)arg1;
- (id)mappedTopics:(id *)arg1;
- (id)_forwardMappingPass:(id)arg1 features:(id)arg2 record:(id)arg3 previousRecord:(id)arg4 stop:(_Bool *)arg5 error:(id *)arg6;
- (id)initWithModels:(id)arg1 entityModel:(id)arg2 locationModel:(id)arg3 unmappingModel:(id)arg4 activationModel:(id)arg5 unmappingActivationModel:(id)arg6 mappingId:(id)arg7;
- (id)initWithMappingId:(id)arg1;
- (long long)_integerForQID:(id)arg1;
- (id)_qidForInteger:(long long)arg1;

@end

