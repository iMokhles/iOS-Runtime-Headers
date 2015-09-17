/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUVideoPlayerView : UIView {
    BOOL _allowsEdgeAntialiasing;
    <PUVideoPlayerViewDelegate> *_delegate;
    BOOL _isDisplayingPlaceholder;
    BOOL _isDisplayingVideo;
    BOOL _isReadyForVideoDisplay;
    UIImage *_placeholderImage;
    UIImageView *_previewImageView;
    NSArray *_previewImageViewConstraints;
    _PUVideoView *_videoView;
    NSArray *_videoViewConstraints;
    unsigned int _videoViewContentMode;
}

@property (nonatomic) BOOL allowsEdgeAntialiasing;
@property (nonatomic) <PUVideoPlayerViewDelegate> *delegate;
@property (nonatomic) BOOL isDisplayingPlaceholder;
@property (nonatomic) BOOL isDisplayingVideo;
@property (nonatomic) BOOL isReadyForVideoDisplay;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) unsigned int videoViewContentMode;

- (void).cxx_destruct;
- (void)_installNewVideoViewIfNecessaryWithPlayer:(id)arg1;
- (void)_updateContentMode;
- (void)_updateEdgeAntialiasing;
- (void)_updateSubviewsVisibility;
- (BOOL)allowsEdgeAntialiasing;
- (void)configureWithAVPlayer:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)generateSnapshotImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDisplayingPlaceholder;
- (BOOL)isDisplayingVideo;
- (BOOL)isReadyForVideoDisplay;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)placeholderImage;
- (void)setAllowsEdgeAntialiasing:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsDisplayingPlaceholder:(BOOL)arg1;
- (void)setIsDisplayingVideo:(BOOL)arg1;
- (void)setIsReadyForVideoDisplay:(BOOL)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setVideoViewContentMode:(unsigned int)arg1;
- (unsigned int)videoViewContentMode;

@end