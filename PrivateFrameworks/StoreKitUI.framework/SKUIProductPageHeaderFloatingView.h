/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageHeaderFloatingView : UIView {
    UIView *_backdropAlphaView;
    _UIBackdropView *_backdropView;
    SKUIColorScheme *_colorScheme;
    BOOL _isPad;
    UISegmentedControl *_sectionControl;
    UIView *_separatorView;
}

@property (nonatomic) float backdropAlpha;
@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (nonatomic, readonly) UIControl *sectionControl;
@property (nonatomic) int selectedSectionIndex;

- (void).cxx_destruct;
- (void)_reloadBackdropView;
- (float)backdropAlpha;
- (id)colorScheme;
- (id)initWithSectionTitles:(id)arg1 isPad:(BOOL)arg2;
- (void)layoutSubviews;
- (id)sectionControl;
- (int)selectedSectionIndex;
- (void)setBackdropAlpha:(float)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setSelectedSectionIndex:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
